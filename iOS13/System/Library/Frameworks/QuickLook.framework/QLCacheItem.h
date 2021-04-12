/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@class NSMutableArray, QLItem;

@interface QLCacheItem : NSObject {

	NSMutableArray* _handlers;
	QLItem* _item;

}

@property (nonatomic,retain) QLItem * item;              //@synthesize item=_item - In the implementation block
-(void)invalidate;
-(QLItem *)item;
-(void)setItem:(QLItem *)arg1 ;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performHandlers;
@end
