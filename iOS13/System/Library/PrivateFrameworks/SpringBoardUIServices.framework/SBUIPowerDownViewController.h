/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBUIPowerDownViewDelegate.h>
#import <libobjc.A.dylib/SBUIPowerDownViewControllerInterface.h>

@protocol SBUIPowerDownViewControllerDelegate;
@class NSString;

@interface SBUIPowerDownViewController : UIViewController <SBUIPowerDownViewDelegate, SBUIPowerDownViewControllerInterface> {

	id<SBUIPowerDownViewControllerDelegate> powerDownDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBUIPowerDownViewControllerDelegate> powerDownDelegate; 
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)powerDownViewAnimateOutCompleted:(id)arg1 ;
-(void)powerDownViewWillAnimateIn:(id)arg1 ;
-(void)powerDownViewWillAnimateOut:(id)arg1 ;
-(void)powerDownViewRequestPowerDown:(id)arg1 ;
-(void)powerDownViewRequestCancel:(id)arg1 ;
-(id)_powerDownView;
-(id<SBUIPowerDownViewControllerDelegate>)powerDownDelegate;
-(void)setPowerDownDelegate:(id<SBUIPowerDownViewControllerDelegate>)arg1 ;
@end

