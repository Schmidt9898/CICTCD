# CICTCD

A Python project using FastAPI, designed for CI/CD workflows and containerization.

## Features

- **FastAPI** web application
- Serves an HTML welcome page from a template
- Includes a GitHub Actions workflow for CI/CD
- Docker build and push support


## Getting Started

### Requirements

- Python >= 3.13
- [uv](https://github.com/astral-sh/uv) (for dependency management and running)
- Docker (optional, for containerization)

### Installation

Install dependencies using [uv](https://github.com/astral-sh/uv):

```sh
uv sync --locked --all-extras --dev
```

### Running the Application

Start the FastAPI server:

```sh
uv run fastapi dev --app main:app
```

Visit [http://localhost:8000/](http://localhost:8000/) to see the welcome page.

### Github workflows

GitHub Actions workflow for CI/CD:
On every push or pull request to the `main` branch, the workflow:

- Installs dependencies
- Runs tests with pytest
- Builds and pushes Docker images

## License

Add your license information here.