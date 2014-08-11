Vessel iOS-framework (Studio Beta)
=============


<strong>Step 1: Download</strong>

1.Login to Vessel Command Center
2.Add your application
3.Get Vessel Secret Key

<strong>Step 2: Unzip and Install</strong>

1.Make sure you are using the latest version of Xcode (v4.6+) and targeting iOS 4.3 or higher.
2.Unzip the file you downloaded and drag the Vessel.framework folder into your Xcode project folder target.


<strong>Step 3: Link libraries</strong>

1.Select you project in Xcode<br>
2.Click your app name under Targets<br>
3.Next select the Build Phases tab<br>
4. Then expand Link Binary With Libraries<br>


<strong> Step 4:Add the following frameworks:</strong>

1.SystemConfiguration.framework<br>
2.Security.framework<br>
3.CFNetwork.framework<br>
4.libsqlite3.dylib<br>
5.libicucore.dylib<br>

<strong> Step 4:Import, Buld & Run</strong>

1. Open your AppDelegate.m file. Import Vessel header
2. Build your application and Run.

