using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.SceneManagement;

public class WebGLSettings : MonoBehaviour
{
    [MenuItem("Build/Build WebGL")]
    public static void BuildWebGL()
    {
        PlayerSettings.WebGL.threadsSupport = false;
        PlayerSettings.WebGL.memorySize = 512;
        BuildPlayerOptions options = new BuildPlayerOptions();
        options.scenes = new string[] { $"Assets/Scenes/{SceneManager.GetActiveScene().name}.unity" };
        options.target = BuildTarget.WebGL;
        options.locationPathName = "Builds";
        BuildPipeline.BuildPlayer(options);
    }
}
