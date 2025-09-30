import SimpleITK as sitk

# -----------------------------
# Load Images (replace with your images)
# -----------------------------
fixed_image = sitk.ReadImage("fixed_image.nii", sitk.sitkFloat32)   # Reference image
moving_image = sitk.ReadImage("moving_image.nii", sitk.sitkFloat32) # Image to register

# -----------------------------
# Setup Registration
# -----------------------------
registration_method = sitk.ImageRegistrationMethod()

# Similarity metric
registration_method.SetMetricAsMattesMutualInformation(numberOfHistogramBins=50)

# Optimizer
registration_method.SetOptimizerAsGradientDescent(learningRate=1.0,
                                                  numberOfIterations=100,
                                                  estimateLearningRate=registration_method.EachIteration)

# Interpolator
registration_method.SetInterpolator(sitk.sitkLinear)

# -----------------------------
# Deformable Transform (B-spline)
# -----------------------------
transformDomainMeshSize = [8, 8]  # Higher = more flexibility
initial_transform = sitk.BSplineTransformInitializer(fixed_image,
                                                     transformDomainMeshSize)
registration_method.SetInitialTransform(initial_transform, inPlace=False)

# -----------------------------
# Execute Registration
# -----------------------------
final_transform = registration_method.Execute(fixed_image, moving_image)

print("Optimizer stop condition:", registration_method.GetOptimizerStopConditionDescription())
print("Final metric value:", registration_method.GetMetricValue())

# -----------------------------
# Apply Transform
# -----------------------------
resampled = sitk.Resample(moving_image,
                          fixed_image,
                          final_transform,
                          sitk.sitkLinear,
                          0.0,
                          moving_image.GetPixelID())

# Save output
sitk.WriteImage(resampled, "registered_image.nii")

print("Deformable registration completed! Output saved as 'registered_image.nii'")
