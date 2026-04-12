const API_KEY = "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";

async function sendMessage() {
  const input = document.getElementById("userInput").value;

  const response = await fetch("https://api.openai.com/v1/chat/completions", {
    method: "POST",
    headers: {
      "Content-Type": "application/json",
      "Authorization": `Bearer ${API_KEY}`
    },
    body: JSON.stringify({
      model: "gpt-4o-mini",
      messages: [
        { role: "system", content: "Talk like a friendly best friend" },
        { role: "user", content: input }
      ]
    })
  });

  const data = await response.json();
  console.log(data);

  const reply = data.choices?.[0]?.message?.content || "Error 😅";

  document.getElementById("chatBox").innerHTML += `
    <p><b>You:</b> ${input}</p>
    <p><b>Bot:</b> ${reply}</p>
  `;
}