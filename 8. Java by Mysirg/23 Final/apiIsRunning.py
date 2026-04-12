from google import genai

# 1. Initialize the client
client = genai.Client(api_key="AIzaSyDY-d1jMIzdUEC-T-hMJ8y3FlxXzKjDXE8")

# 2. Generate content using the new client-side syntax
response = client.models.generate_content(
    model="gemini-2.0-flash", 
    contents="Hi"
)

# 3. Print the response text
print(response.text)