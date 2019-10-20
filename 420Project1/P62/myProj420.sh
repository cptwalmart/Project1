#!/bin/bash

# File: myProj420.sh

#SBATCH --job-name=Proj420     
#SBATCH --nodes=15
#SBATCH --ntasks-per-node=12
#SBATCH --mem=8gb
#SBATCH --time=01:30:00    # Time limit in the form hh:mm:ss
#SBATCH --output=out/%j.log

module load mpi/openmpi3-x86_64

# For a python3 project
# srun python3 ~/Projects/myproject/myproject.py

# For a C MPI project
mpirun ~/P62/p62