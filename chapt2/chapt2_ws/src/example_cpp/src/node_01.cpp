#include "rclcpp/rclcpp.hpp"

int main(int argc,char **argv)
{
    //初始化rclcpp
    rclcpp::init(argc,argv);
    //产生一个node_01的节点
    auto node =std::make_shared<rclcpp::Node>("node_01");
    //打印自我介绍
    RCLCPP_INFO(node->get_logger(),"node_01几点已经启动");
    rclcpp::spin(node);
    //tingzhi
    rclcpp::shutdown();
    return 0;
}