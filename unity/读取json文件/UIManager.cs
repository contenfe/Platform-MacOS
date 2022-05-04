using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/**
 * @description: 
    FromJson : 把json信息转换成一个对象
    ToJson: 把一个对象转换成json信息
 * @param {*}
 * @return {*}
 */
public class UIManager
{
    private static UIManager instance;
    private Dictionary<UIPanelType, string> panelPathDict;// 存储面板路径

    void ParseUIPanelTypeJson()
    {
        panelPathDict = new Dictionary<UIPanelType, string>();
        TextAsset ta = Resources.Load<TextAsset>(
            "TextInfo/UIPanelType"
        );
        Debug.Log("ta is null " + ta == null);
        Debug.Log(ta.text);
        UIPanelTypeJson jsonObject = JsonUtility.FromJson<UIPanelTypeJson>(ta.text);
        //Debug.Log("jsonObject" + jsonObject.infoList.Count);
        foreach (var item in jsonObject.infoList)
        {
            Debug.Log("item.panelTYPE: " + item.panelType + " item.panelPath: " + item.path);
            panelPathDict.Add(item.panelType, item.path);
            Debug.Log("----------------------");
        }


    }

    public void Test()
    {
        // string path;
        // panelPathDict.TryGetValue(UIPanelType, out path);
        // Debug.Log(path);
    }
    private UIManager()
    {
        ParseUIPanelTypeJson();
    }

    public UIManager getInstance()
    {
        if (instance == null)
        {
            instance = new UIManager();
        }

        return instance;
    }

    public static UIManager Instance
    {
        get
        {
            if (instance == null)
            {
                instance = new UIManager();
            }
            return instance;
        }
    }

}
