using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/**
 * @description: 
    序列化：对象转换成二进制
    反序列化：二进制转换成对象
 * @param {*}
 * @return {*}
 */
[Serializable]
public class UIPanelInfo : ISerializationCallbackReceiver
{
    [NonSerializedAttribute]
    public UIPanelType panelType;
    public string panelTypeString;
    public string path;

    /**
     * @description:
     反序列化后调用这个方法 文本信息-》对象
     * @param {*}
     * @return {*}
     */
    void ISerializationCallbackReceiver.OnAfterDeserialize()
    {
        UIPanelType type = (UIPanelType)System.Enum.Parse(typeof(UIPanelType), panelTypeString); // 将字符串转换对应的枚举类型
        panelType = type; // 将反序列化
    }

    /**
     * @description: 
     序列化前调用这个方法 
     * @param {*}
     * @return {*}
     */
    void ISerializationCallbackReceiver.OnBeforeSerialize()
    {

    }
}

class UIPanelTypeJson
{
    public List<UIPanelInfo> infoList;
}
