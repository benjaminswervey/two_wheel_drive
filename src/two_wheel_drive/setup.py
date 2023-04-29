from setuptools import setup

package_name = 'two_wheel_drive'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='benjamin',
    maintainer_email='youremail@example.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
      'encoder_reader = two_wheel_drive.encoder_reader:main',
      'encoder_counter = two_wheel_drive.encoder_counter:main',
      'talker = two_wheel_drive.publisher_member_function:main',
      'listener = two_wheel_drive.subscriber_member_function:main'
      
        ],
    },
)
