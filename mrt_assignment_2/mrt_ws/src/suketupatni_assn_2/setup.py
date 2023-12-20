from setuptools import find_packages, setup

package_name = 'suketupatni_assn_2'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='suketupatni',
    maintainer_email='suketupatni@todo.todo',
    description='MRT Assignment 2: 4 Daughter Rovers and a Base Station',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        	'talker1 = suketupatni_assn_2.d_rover1:main',
        	'talker2 = suketupatni_assn_2.d_rover2:main',
        	'talker3 = suketupatni_assn_2.d_rover3:main',
        	'listener = suketupatni_assn_2.basestation:main',
        ],
    },
)
