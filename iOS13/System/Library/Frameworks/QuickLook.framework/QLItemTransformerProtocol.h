/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLItemTransformerProtocol <NSObject>
@optional
-(id)transformedContentsFromURL:(id)arg1 context:(id)arg2 error:(id*)arg3;
-(id)transformedContentsFromData:(id)arg1 context:(id)arg2 error:(id*)arg3;
-(id)transformedContentsFromSpotlightSearchableItemInfo:(id)arg1 context:(id)arg2 error:(id*)arg3;

@required
+(id)allowedOutputClasses;

@end

