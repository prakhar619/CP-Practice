# Daily Competitive Programming Practice 

This repository documents my daily practice of competitive programming. Each day, I solve at least one problem and publish a detailed solution in the form of a Jupyter notebook. The objective is to build consistency, deepen understanding, and maintain a searchable knowledge base of problem-solving approaches.

## Repository Structure

- `4. Questions/`: Contains one Jupyter notebook per day with complete problem statements, approaches, code, and test cases.
- `Dockerfile`: Defines a reproducible environment for running the notebooks.
- `requirements.txt`: Lists Python dependencies required for the project.

## Goals

- Solve one problem per day from various competitive programming platforms.
- Write clear, structured, and detailed explanations for each problem.
- Maintain consistency and quality in documentation, code style, and thought process.
- Enable others to reproduce the environment easily using Docker.

## Getting Started

## Docker Setup

Follow the steps below to build and run the Docker container for this project. This ensures a consistent and reproducible environment for running all Jupyter notebooks.

### Prerequisites

- Docker must be installed and running on your system.  
  [Install Docker](https://docs.docker.com/get-docker/)

### Step 1: Clone the Repository

```bash
git clone https://github.com/prakhar619/CP-Practice
cd CP-Practice
```

### Step 2: Build the Docker Image

```bash
docker build -t cp-practice .
```

This command builds a Docker image named `cp-notebooks` using the `Dockerfile` in the repository root.

### Step 3: Run the Container

```bash
docker start --name cpp_jupyter cp-practice
```
### Step 4: Enter the Environment 
```bash
docker exec -it cpp_jupyter /bin/bash/sh
```

