from setuptools import find_packages, setup

package_name = 'suketupatni_assn_3'

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
    maintainer_email='23b1299@iitb.ac.in',
    description='Supplies images from the webcam',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'camera_guy = suketupatni_assn_3.camera_publisher:main',
            'img_processor = suketupatni_assn_3.image_processor:main',
        ],
    },
)
