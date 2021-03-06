/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSItemProvider, NSUUID, NSProgress, NSString;

@interface _UIDataTransferRequest : NSObject <NSProgressReporting> {

	NSItemProvider* _itemProvider;
	NSUUID* _UUID;
	NSProgress* _progress;

}

@property (nonatomic,retain) NSItemProvider * itemProvider;              //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,retain) NSUUID * UUID;                              //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                      //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSItemProvider *)itemProvider;
-(NSProgress *)progress;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
@end

