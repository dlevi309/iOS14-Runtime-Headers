/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

@class NSURL;


@protocol BSPathProviding <NSObject>
@property (nonatomic,readonly) NSURL * defaultPath; 
@property (nonatomic,readonly) NSURL * libraryPath; 
@property (nonatomic,readonly) NSURL * cachesPath; 
@required
-(NSURL *)libraryPath;
-(NSURL *)defaultPath;
-(NSURL *)cachesPath;

@end

