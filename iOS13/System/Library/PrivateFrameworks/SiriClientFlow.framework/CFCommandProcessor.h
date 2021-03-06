/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/

#import <libobjc.A.dylib/CFCommandProcessing.h>

@class CFServiceHelper, CFCommandQueuer, NSString;

@interface CFCommandProcessor : NSObject <CFCommandProcessing> {

	CFServiceHelper* _serviceHelper;
	CFCommandQueuer* _commandQueuer;

}

@property (nonatomic,retain) CFServiceHelper * serviceHelper;              //@synthesize serviceHelper=_serviceHelper - In the implementation block
@property (nonatomic,retain) CFCommandQueuer * commandQueuer;              //@synthesize commandQueuer=_commandQueuer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleOneWayCommand:(id)arg1 ;
-(void)handleCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)isDeviceLockedWithPasscodeWithCompletion:(/*^block*/id)arg1 ;
-(CFServiceHelper *)serviceHelper;
-(void)setServiceHelper:(CFServiceHelper *)arg1 ;
-(CFCommandQueuer *)commandQueuer;
-(id)initWithServiceHelper:(id)arg1 commandQueuer:(id)arg2 ;
-(void)setCommandQueuer:(CFCommandQueuer *)arg1 ;
@end

