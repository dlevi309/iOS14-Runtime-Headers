/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPreviewInteractionTouchForceProviding.h>

@protocol _UIPreviewInteractionTouchForceProviding, UICoordinateSpace;
@class NSString;

@interface _UIPreviewInteractionDecayTouchForceProvider : NSObject <_UIPreviewInteractionTouchForceProviding> {

	id<_UIPreviewInteractionTouchForceProviding> _touchForceProvider;
	double _initialTouchForce;
	CGPoint _location;
	id<UICoordinateSpace> _coordinateSpace;
	BOOL _active;

}

@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) double touchForce; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActive:(BOOL)arg1 ;
-(double)touchForce;
-(BOOL)isActive;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(void)cancelInteraction;
-(id)initWithTouchForceProvider:(id)arg1 ;
@end

