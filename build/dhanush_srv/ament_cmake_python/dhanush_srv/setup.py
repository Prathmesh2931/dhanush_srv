from setuptools import find_packages
from setuptools import setup

setup(
    name='dhanush_srv',
    version='0.0.0',
    packages=find_packages(
        include=('dhanush_srv', 'dhanush_srv.*')),
)
