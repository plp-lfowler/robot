from setuptools import setup

package_name = 'controllers'

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
        	'joint_state = controllers.joint_state_controller:main',
            'my_cobot = controllers.my_cobot_server:main',
            'follow_trajectory = controllers.follow_trajectory_controller:main'
        ],
    },
)