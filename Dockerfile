FROM continuumio/miniconda3

# Install required packages
RUN conda update -n base -c defaults conda && \
    conda install -c conda-forge xeus-cling jupyterlab


# Set working directory
WORKDIR /home

COPY . .

# Expose Jupyter port
EXPOSE 8888

# Run JupyterLab
CMD ["jupyter-lab", "--ip=0.0.0.0", "--no-browser", "--allow-root"]
