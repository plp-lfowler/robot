from setuptools import find_packages
from setuptools import setup

setup(
    name='my_cobot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('my_cobot_interfaces', 'my_cobot_interfaces.*')),
)
