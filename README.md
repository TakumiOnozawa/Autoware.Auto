# Autoware.Auto Model
This is a MATLAB/Simulink sample model suit for [Autoware.Auto](https://gitlab.com/autowarefoundation/autoware.auto/AutowareAuto/-/tree/1.0.0). Autoware.Auto provides a rich set of self-driving modules composed of sensing, computing, and actuation capabilities based on ROS 2 Messages. By using this model, ROS 2-based self-driving systems can be designed in MATLAB/Simulink and the source code can be easily parallelized.

## Requirement

- Preinstallation of Autoware.Auto ([here](https://autowarefoundation.gitlab.io/autoware.auto/AutowareAuto/installation.html))
- MATLAB/Simulink
	- ROS Toolbox
	- Image Processing Toolbox (optional)
	- Computer Vision System Toolbox (optional)

##  Release Compatibility
### Autoware.Auto Messages
Autoware.Auto 1.0.0
### MATLAB/Simulink
Created with R2021b

## Provided Samples
<table>
  <tr>
    <th rowspan="2">module</th>
    <th rowspan="2">model</th>
    <th rowspan="2">Description</th>
    <th colspan="2">input data</th>
    <th colspan="2">output data</th>
    <th rowspan="2">Toolbox</th>
  </tr>
  <tr>
    <th>topic name</th>
    <th>ROS 2 message type</th>
    <th>topic name</th>
    <th>ROS 2 message type</th>
  </tr>
  <tr>
    <td rowspan="3">filters</td>
    <td>point_cloud_filter<br>_transform_node.slx</td>
    <td>Remove data outside the threshold.<br>Apply affine transformation to the data within the threshold.</td>
    <td>Raw Points</td>
    <td>common_interfaces/sensor_msgs<br>/msg/PointCloud2.msg</td>
    <td>Transformed Points</td>
    <td>common_interfaces/sensor_msgs<br>/msg/PointCloud2.msg</td>
    <td>Image Processing Toolbox<br>Computer Vision System Toolbox</td>
  </tr>
  <tr>
    <td>point_cloud_fusion_node.slx</td>
    <td>Combine point cloud data acquired by multiple devices.</td>
    <td>Transformed Points</td>
    <td>common_interfaces/sensor_msgs<br>/msg/PointCloud2.msg</td>
    <td>Fused Point Cloud</td>
    <td>common_interfaces/sensor_msgs<br>/msg/PointCloud2.msg</td>
    <td></td>
  </tr>
  <tr>
    <td>voxel_grid_node.slx</td>
    <td>Divide the point cloud into a grid and combine the points in each grid into a single point.</td>
    <td>Fused Point Cloud</td>
    <td>common_interfaces/sensor_msgs<br>/msg/PointCloud2.msg</td>
    <td>Downsampled Point Cloud</td>
    <td>common_interfaces/sensor_msgs<br>/msg/PointCloud2.msg</td>
    <td></td>
  </tr>
</table>
