/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>

@class SKUIGift, SKUIGiftConfiguration, SSVLoadURLOperation, NSOperationQueue;

@interface SKUIGiftStepViewController : UIViewController {

	SKUIGift* _gift;
	SKUIGiftConfiguration* _giftConfiguration;
	SSVLoadURLOperation* _loadOperation;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) SKUIGift * gift;                                        //@synthesize gift=_gift - In the implementation block
@property (nonatomic,readonly) SKUIGiftConfiguration * giftConfiguration;              //@synthesize giftConfiguration=_giftConfiguration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                        //@synthesize operationQueue=_operationQueue - In the implementation block
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(SKUIGift *)gift;
-(SKUIGiftConfiguration *)giftConfiguration;
-(void)loadItemArtworkWithArtworkContext:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)finishGiftingWithResult:(BOOL)arg1 ;
-(void)_finishImageLoadWithImage:(id)arg1 error:(id)arg2 block:(/*^block*/id)arg3 ;
@end

