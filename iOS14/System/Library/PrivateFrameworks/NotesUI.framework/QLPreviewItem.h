/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

@class NSURL, NSString;


@protocol QLPreviewItem <NSObject>
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
@optional
-(NSString *)previewItemTitle;

@required
-(NSURL *)previewItemURL;

@end

