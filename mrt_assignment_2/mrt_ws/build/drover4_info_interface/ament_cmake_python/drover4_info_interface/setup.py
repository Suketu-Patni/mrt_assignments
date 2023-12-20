from setuptools import find_packages
from setuptools import setup

setup(
    name='drover4_info_interface',
    version='0.0.0',
    packages=find_packages(
        include=('drover4_info_interface', 'drover4_info_interface.*')),
)
