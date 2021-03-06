# VLT Editor Tool

# Compatability

- Unreal Engine 4.25 +

- Unreal Engine 5



# Description

Plugin toolset for Unreal Engine to extend filesystem usage, layout tools, and other useful functions and UI windows.

# Install

- Copy the base VLTEditorTool folder that contains the files to your Unreal Engine project's /Plugins folder. Create the /Plugins folder if it doesn't exist.

- Open your Unreal Engine project
- Open the Plugins menu and enable the VLTEditorTool. It should be under ```Installed > Editor```.

- If asked to rebuild the plugin, click yes.
- Open your Content Browser Settings and turn on ```Plugin Content Folders``` to see the plugins content files to use like the UI windows. Scroll down to VLTEditorTool to view the files.

```C:/MyGame/Plugins/VLTEditorTool```

# UI Windows

## EUI_CopyDirectoryToContent
### Usage
User provides a path to a directory to copy to either the Content folder or Plugin folder of the currently opened project.

Very useful for UE 5 Early Access for people having trouble with Marketplace UI not opening. Download Unreal marketplace items to another dummy 4.26 or earlier Unreal Engine project, then use this UI tool to copy that plugin/assets to you're current project.

### Screenshots
<img src="imgs/EUI_CopyDirContent_03.png"  alt="UI">

### How to Load

<img src="imgs/EUI_CopyDirContent_01.png" alt="Load with Right Click" >

<img src="imgs/EUI_CopyDirContent_02.png" alt="Load with Toolbar" >
<br>

# Blueprints

## Copy Directory to Directory
Copy a **Source** directory to a **Target** directory, can also set the **Overwrite** checkbox if needed.

### Screenshots
<img src="imgs/BP_CopyDirtoDir_01.png"  alt="Load Blueprint">
<img src="imgs/BP_CopyDirtoDir_02.png"  alt="Blueprint UI">

