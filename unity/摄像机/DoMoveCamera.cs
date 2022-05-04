using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class DoMoveCamera : MonoBehaviour
{

    [SerializeField]
    private float m_moveSpeed; // 移动速度
    private void Start()
    {

    }
    private void Update()
    {
        float _horizontal = Input.GetAxis("Horizontal");
        float _vertical = Input.GetAxis("Vertical");

        if (_horizontal != 0 || _vertical != 0)
        {
            this.transform.Translate(_horizontal, 0, _vertical);

        }

    }

}
