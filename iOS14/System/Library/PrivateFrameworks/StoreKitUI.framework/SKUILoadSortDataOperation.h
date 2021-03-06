/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUILoadResourceOperation.h>

@class SSVLoadURLOperation, SKUISortDataRequest;

@interface SKUILoadSortDataOperation : SKUILoadResourceOperation {

	SSVLoadURLOperation* _underlyingOperation;

}

@property (__weak) SSVLoadURLOperation * underlyingOperation;                 //@synthesize underlyingOperation=_underlyingOperation - In the implementation block
@property (copy,readonly) SKUISortDataRequest * resourceRequest; 
-(SSVLoadURLOperation *)underlyingOperation;
-(void)main;
-(void)cancel;
-(void)setUnderlyingOperation:(SSVLoadURLOperation *)arg1 ;
-(id)initWithResourceRequest:(id)arg1 ;
@end

