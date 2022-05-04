/*
 * @Description: 3D数学 向量
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-14 13:45:11
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-14 17:06:41
 * @FilePath: /3DMath/Assets/Scripts/Day4/VectorDemo.cs
 */
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class VectorDemo : MonoBehaviour
{

    public Transform t1, t2, t3;
    private void Start()
    {

    }

    private void Update()
    {


        if (Input.GetKeyDown(KeyCode.A))
        {

            Demo2();
        }
    }

    private void Demo()
    {

        // 求向量到zero 的摸
        Vector3 pos = this.transform.position;

        float s = pos.magnitude;
        float s1 = pos.sqrMagnitude;
        float s2 = Vector3.Distance(Vector3.zero, pos);
        Debug.DrawLine(Vector3.zero, pos);
    }

    void Demo1()
    {
        // 求方向

        Vector3 pos = transform.position;

        Vector3 n = pos / pos.magnitude;
        // api 归一化
        Vector3 n1 = pos.normalized;

        Debug.DrawLine(pos, Vector3.zero, Color.red);
    }

    /// <summary>
    /// 向量运算
    /// </summary>
    void Demo2()
    {
        Vector3 relativeDirection = t1.position - t2.position;
        // 方向

        // 大小


        // test
        // 获取方向，避免两个物体间距对速度造成影响
        t3.Translate(relativeDirection.normalized);
        Debug.DrawLine(Vector3.zero, relativeDirection, Color.red);

    }

    /// <summary>
    /// 点乘
    /// </summary>
    void Demo3()
    {
        float dot = Vector3.Dot(t1.position.normalized, t2.position.normalized);
    }
}
