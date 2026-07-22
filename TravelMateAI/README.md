# TravelMate AI ✈️🤖

Building a tool-calling AI Travel Assistant using Python and Llama 3.3 (70B) via the Groq API.

## 📌 Features
- 🌦️ **Weather Information**: Retrieve current weather details for target cities.
- ✈️ **Flight Search**: Search available flights, pricing, and durations.
- 🏨 **Hotel Finder**: Locate top hotels and check ratings.
- 📍 **Tourist Attractions**: Discover popular spots to visit in a destination.

## 🛠️ Project Structure
```text
TravelMateAI/
├── main.py
├── requirements.txt
├── .env.example
├── .gitignore
└── README.md
```

## 🚀 Getting Started

### 1. Clone the repository
```bash
git clone [https://github.com/your-username/TravelMateAI.git](https://github.com/your-username/TravelMateAI.git)
cd TravelMateAI
```

### 2. Create and activate virtual environment
```bash
python -m venv venv
# On Windows PowerShell:
venv\Scripts\activate
```

### 3. Install dependencies
```bash
pip install -r requirements.txt
```

### 4. Configure Environment Variables
Rename `.env.example` to `.env` and insert your Groq API key:
```env
GROQS_API_KEY=your_actual_groq_api_key
```

### 5. Run the application
```bash
python main.py
```