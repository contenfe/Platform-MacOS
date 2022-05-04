/*
 * @Description: 右键开镜
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-14 11:11:30
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-14 11:11:40
 * @FilePath: /Learn/unity/摄像机/CameraZoom.cs
 */
using System.Runtime.InteropServices;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class CameraZoom : MonoBehaviour
{
    private bool b_openRightCamera;
    private float m_normalCamera; // 正常/无放大缩小 摄像机的值

    private Camera m_camera;
    private void Start()
    {
        m_camera = GetComponent<Camera>();
        b_openRightCamera = false;
        m_normalCamera = 60;

        if (m_normalCamera == null)
        {
            Debug.LogError("m_normalCamera is null" + m_normalCamera);
        }

        if (m_camera == null)
        {
            Debug.Log("m_camera is null");
        }
    }
    // 鼠标右键开火
    private void Update()
    {


        // 开镜
        if (Input.GetMouseButtonDown(1))
        {
            Debug.Log("mouse exec");
            // 
            b_openRightCamera = !b_openRightCamera;

            // 闭镜 还原默认值
            if (!b_openRightCamera)
            {
                m_camera.fieldOfView = 60f;
            }

            // 开镜，设置开镜默认值
            if (b_openRightCamera)
            {
                m_camera.fieldOfView = 40f;
            }

            // test
            // if (b_openRightCamera)
            // {
            //     m_camera.fieldOfView = 90f;
            // }
        }

        // 在开镜的情况下，通过鼠标滑轮控制放大缩小
        if ((Input.GetAxis("Mouse ScrollWheel") != 0) && b_openRightCamera)
        {
            float __scale = Input.GetAxis("Mouse ScrollWheel");
            Debug.Log("__scale : " + __scale);
            if (m_camera.fieldOfView <= 40 && m_camera.fieldOfView >= 30)
            {
                float __valua = m_camera.fieldOfView + (__scale * 2);
                if (__valua > 40f)
                {
                    // 设置最近距离
                    m_camera.fieldOfView = 40f;
                }
                else if (__valua < 30f)
                {
                    // 设置最远距离
                    m_camera.fieldOfView = 30f;
                }
                else
                {
                    m_camera.fieldOfView = __valua;
                }

            }


            // 
        }



    }

}
