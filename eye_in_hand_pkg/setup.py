from setuptools import setup, find_packages

package_name = 'eye_in_hand_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(where='src'),
    package_dir={'': 'src'},
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name,
            ['package.xml']),
        ('lib/python3.12/site-packages/hmi',
            ['src/hmi/hmi_window.ui']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='student',
    maintainer_email='student@student.com',
    description='HMI for eye in hand project',
    license='Apache-2.0',
    entry_points={
    'console_scripts': [
        'hmi_status = eye_in_hand_pkg.hmi_status:main',
        'hmi_bediening = eye_in_hand_pkg.hmi_bediening:main',
        'hmi_calibratie = eye_in_hand_pkg.hmi_calibratie:main',
        'robot_bediening = eye_in_hand_pkg.robot_bediening:main',
        'hmi_main = eye_in_hand_pkg.hmi_main:main',
        'hmi_camera = eye_in_hand_pkg.hmi_camera:main',
        'hmi_product = eye_in_hand_pkg.hmi_product:main',
        'robot_main = eye_in_hand_pkg.robot_main:main',
        'robot_product = eye_in_hand_pkg.robot_product:main',
        ],
    },
)