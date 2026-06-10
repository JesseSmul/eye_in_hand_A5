from setuptools import find_packages
from setuptools import setup

setup(
    name='eye_in_hand_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('eye_in_hand_interfaces', 'eye_in_hand_interfaces.*')),
)
