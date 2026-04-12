from google import genai

import time
API_KEYS = [
    "AIzaSyDYmipnizfVybvGerzh4SOvUNqwgjvqRkA",
    "AIzaSyDY-d1jMIzdUEC-T-hMJ8y3FlxXzKjDXE8",
]

MODELS = [
    "gemini-2.0-flash",
    "gemini-2.0-flash-lite",
    "gemini-1.5-pro",
    "gemini-1.5-flash"
]

def generate(prompt):
    for key in API_KEYS:
        client = genai.Client(api_key=key)

        for model in MODELS:
            try:
                response = client.models.generate_content(
                    model=model,
                    contents=prompt
                )
                return response.text

            except Exception as e:
                error_msg = str(e).lower()

                # 👇 ignore quota errors silently
                if "quota" in error_msg or "resource_exhausted" in error_msg:
                    continue

                # 👇 ignore model not found etc
                elif "not found" in error_msg:
                    continue

                else:
                    continue

    return "Bro, give me a moment 😅 try again in a bit"

print(generate("Hello bro"))