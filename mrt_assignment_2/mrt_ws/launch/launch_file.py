from launch import LaunchDescription
from launch_ros.actions import Node

# don't put namespaces ever

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='suketupatni_assn_2',
            executable='d_rover1',
            name='d_rover1'
        ),
        Node(
            package='suketupatni_assn_2',
            executable='d_rover2',
            name='d_rover2'
        ),
        Node(
            package='suketupatni_assn_2',
            executable='d_rover3',          
            name='d_rover3'
        ),
        Node(
            package='suketupatni_assn_2',
            executable='d_rover4',           
            name='d_rover4'
        ),
        Node(
            package='suketupatni_assn_2',
            executable='basestation',           
            name='basestation'
        )
    ])
