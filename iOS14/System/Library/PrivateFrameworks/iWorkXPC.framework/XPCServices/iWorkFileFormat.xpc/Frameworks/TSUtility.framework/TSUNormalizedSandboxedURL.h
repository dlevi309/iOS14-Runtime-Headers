/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUSandboxedURL.h>

@class TSUSandboxedURL;

@interface TSUNormalizedSandboxedURL : TSUSandboxedURL {

	TSUSandboxedURL* _originalSandboxedURL;

}
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)originalSandboxedURLForNormalizing;
-(id)initWithURL:(id)arg1 originalSandboxedURL:(id)arg2 ;
-(BOOL)hasSandboxAccess;
@end

