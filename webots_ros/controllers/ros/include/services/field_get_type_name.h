/*
 * Copyright 1996-2020 Cyberbotics Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef WEBOTS_ROS_MESSAGE_FIELD_GET_TYPE_NAME_H
#define WEBOTS_ROS_MESSAGE_FIELD_GET_TYPE_NAME_H

#include "ros/service_traits.h"

#include "field_get_type_nameRequest.h"
#include "field_get_type_nameResponse.h"

namespace webots_ros
{

struct field_get_type_name
{

typedef field_get_type_nameRequest Request;
typedef field_get_type_nameResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

};
} // namespace webots_ros

namespace ros
{
namespace service_traits
{

template<>
struct MD5Sum< ::webots_ros::field_get_type_name > {
  static const char* value()
  {
    return "5a98464d3ca05386300217ec41ec161f";
  }

  static const char* value(const ::webots_ros::field_get_type_name&) { return value(); }
};

template<>
struct DataType< ::webots_ros::field_get_type_name > {
  static const char* value()
  {
    return "webots_ros/field_get_type_name";
  }

  static const char* value(const ::webots_ros::field_get_type_name&) { return value(); }
};

template<>
struct MD5Sum< ::webots_ros::field_get_type_nameRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_get_type_name >::value();
  }
  static const char* value(const ::webots_ros::field_get_type_nameRequest&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_get_type_nameRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_get_type_name >::value();
  }
  static const char* value(const ::webots_ros::field_get_type_nameRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::field_get_type_nameResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_get_type_name >::value();
  }
  static const char* value(const ::webots_ros::field_get_type_nameResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_get_type_nameResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_get_type_name >::value();
  }
  static const char* value(const ::webots_ros::field_get_type_nameResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_GET_TYPE_NAME_H
