/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/GLKViewDelegate.h>

@class GLKBaseEffect, EAGLContext, UIDynamicAnimator, GLKView, NSString;

@interface UIDynamicsDebug : NSObject <GLKViewDelegate> {

	unsigned _vertexBuffer;
	SCD_Struct_UI69 _vertices[42000];
	GLKBaseEffect* _effect;
	EAGLContext* _ctx;
	BOOL _enabled;
	BOOL _showPhysics;
	BOOL _showOutlineInterior;
	BOOL _showFields;
	UIDynamicAnimator* _animator;
	GLKView* _debugView;

}

@property (assign,nonatomic,__weak) UIDynamicAnimator * animator;              //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) GLKView * debugView;                              //@synthesize debugView=_debugView - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL showPhysics;                                 //@synthesize showPhysics=_showPhysics - In the implementation block
@property (assign,nonatomic) BOOL showOutlineInterior;                         //@synthesize showOutlineInterior=_showOutlineInterior - In the implementation block
@property (assign,nonatomic) BOOL showFields;                                  //@synthesize showFields=_showFields - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIDynamicAnimator *)animator;
-(void)setAnimator:(UIDynamicAnimator *)arg1 ;
-(BOOL)enabled;
-(id)init;
-(void)setNeedsDisplay;
-(void)setEnabled:(BOOL)arg1 ;
-(GLKView *)debugView;
-(void)captureDebugInformation;
-(BOOL)showFields;
-(void)_teardownDebugView;
-(void)_setupDebugViewIfNeccessary;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
-(void)setShowPhysics:(BOOL)arg1 ;
-(BOOL)showOutlineInterior;
-(void)setShowOutlineInterior:(BOOL)arg1 ;
-(BOOL)showPhysics;
-(void)setDebugView:(GLKView *)arg1 ;
-(id)initWithAnimator:(id)arg1 ;
-(void)setShowFields:(BOOL)arg1 ;
-(void)dealloc;
@end

