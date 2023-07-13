from setuptools import setup

package_name = 'coord_controller'

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
    maintainer='lance',
    maintainer_email='lance.fowler@plp.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'my_cobot=coord_controller.my_cobot:main',
            'state_machine=coord_controller.state_machine:main'
        ],
    },
)
