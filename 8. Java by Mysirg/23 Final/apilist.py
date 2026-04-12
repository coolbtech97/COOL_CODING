from google import genai

client = genai.Client(api_key="AIzaSyDYmipnizfVybvGerzh4SOvUNqwgjvqRkA")

models = client.models.list()

for m in models:
    print(m.name)