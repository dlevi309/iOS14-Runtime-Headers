/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

@class LSBundleProxy, NSString, NSURL, NSDictionary;


@protocol LSIconResourceLocator <NSObject>
@property (copy,readonly) LSBundleProxy * typeOwner; 
@property (copy,readonly) NSString * applicationIdentifier; 
@property (readonly) NSURL * resourcesDirectoryURL; 
@property (readonly) NSDictionary * bundleIconsDictionary; 
@required
-(NSString *)applicationIdentifier;
-(LSBundleProxy *)typeOwner;
-(NSDictionary *)bundleIconsDictionary;
-(NSURL *)resourcesDirectoryURL;

@end

