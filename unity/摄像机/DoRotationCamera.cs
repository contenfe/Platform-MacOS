/*
 * @Description: 摄像机旋转
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-14 11:32:49
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-14 13:13:37
 * @FilePath: /3DMath/Assets/Scripts/Day4/DoRotationCamera.cs
 */
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class DoRotationCamera : MonoBehaviour
{

    private void FixedUpdate()
    {
        float _rotationX = Input.GetAxis("Mouse X");
        float _rotationY = Input.GetAxis("Mouse Y");
        if (_rotationX != 0 || _rotationY != 0)
        {
            RotateView(_rotationX, _rotationY);

        }
    }

    private void RotateView(float _rotationX, float _rotationY)
    {

        // 上下沿自身
        this.transform.Rotate(-_rotationY, 0, 0);
        // 左右旋转需要沿世界坐标Y轴
        this.transform.Rotate(0, _rotationX, 0, Space.World);
    }
}
