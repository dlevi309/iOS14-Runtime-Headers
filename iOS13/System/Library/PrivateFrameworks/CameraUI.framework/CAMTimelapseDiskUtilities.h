/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@interface CAMTimelapseDiskUtilities : NSObject
+(BOOL)hasPendingWork;
+(id)fileNameForImageFrameIndex:(long long)arg1 ;
+(id)directoryPathForTimelapseUUID:(id)arg1 ;
+(id)readSortedStatesFromDiskMergeSecondaryState:(BOOL)arg1 ;
+(BOOL)reserveDummyFileForTimelapseUUID:(id)arg1 width:(long long)arg2 height:(long long)arg3 useHEVC:(BOOL)arg4 ;
+(id)readSecondaryStateForTimelapseUUID:(id)arg1 ;
+(BOOL)writeStateToDisk:(id)arg1 createDirectoryIfNeeded:(BOOL)arg2 ;
+(id)timelapseDirectoryPathCreateIfNeeded:(BOOL)arg1 ;
+(id)timelapseDirectoryPath;
+(id)stateFileName;
+(id)stateFilePathForTimelapseUUID:(id)arg1 ;
+(id)secondaryStateFileName;
+(id)secondaryStateFilePathForTimelapseUUID:(id)arg1 ;
+(BOOL)writeSecondaryStateToDisk:(id)arg1 forTimelapseUUID:(id)arg2 ;
+(id)timelapseUUIDsOnDisk;
+(id)readStateForTimelapseUUID:(id)arg1 mergeSecondaryState:(BOOL)arg2 ;
+(long long)frameIndexFromImageFileName:(id)arg1 ;
+(id)dummyFileName;
+(id)dummyFilePathForTimelapseUUID:(id)arg1 ;
+(id)fileNameForImageVISIndex:(long long)arg1 ;
+(id)updateSecondaryStateForTimelapseUUID:(id)arg1 withStopReasons:(long long)arg2 stopTime:(id)arg3 ;
+(id)updateSecondaryStateForMovieWriteAttemptForTimelapseUUID:(id)arg1 ;
+(id)updateSecondaryStateForTimelapseUUID:(id)arg1 forStateReadSuccessfully:(BOOL)arg2 ;
+(id)readFrameFilePathsForTimelapseUUID:(id)arg1 ;
+(id)sortedArrayFromFilePathDictionary:(id)arg1 reverse:(BOOL)arg2 ;
+(BOOL)removeDummyFileForTimelapseUUID:(id)arg1 ;
@end

