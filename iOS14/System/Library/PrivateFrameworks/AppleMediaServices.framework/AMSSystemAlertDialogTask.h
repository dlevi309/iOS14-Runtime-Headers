/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <AppleMediaServices/AMSTask.h>

@class AMSDialogRequest;

@interface AMSSystemAlertDialogTask : AMSTask {

	BOOL _dismissOnHomeButton;
	BOOL _dismissOnLock;
	BOOL _shouldDismissAfterUnlock;
	BOOL _shouldDisplayAsTopMost;
	BOOL _shouldPendInSetupIfNotAllowed;
	BOOL _displaysOnLockscreen;
	AMSDialogRequest* _request;
	long long _defaultButtonIndex;
	long long _unlockActionButtonIndex;

}

@property (assign) long long defaultButtonIndex;                        //@synthesize defaultButtonIndex=_defaultButtonIndex - In the implementation block
@property (assign) BOOL dismissOnHomeButton;                            //@synthesize dismissOnHomeButton=_dismissOnHomeButton - In the implementation block
@property (assign) BOOL dismissOnLock;                                  //@synthesize dismissOnLock=_dismissOnLock - In the implementation block
@property (assign) BOOL shouldDismissAfterUnlock;                       //@synthesize shouldDismissAfterUnlock=_shouldDismissAfterUnlock - In the implementation block
@property (assign) BOOL shouldDisplayAsTopMost;                         //@synthesize shouldDisplayAsTopMost=_shouldDisplayAsTopMost - In the implementation block
@property (assign) BOOL shouldPendInSetupIfNotAllowed;                  //@synthesize shouldPendInSetupIfNotAllowed=_shouldPendInSetupIfNotAllowed - In the implementation block
@property (assign) BOOL displaysOnLockscreen;                           //@synthesize displaysOnLockscreen=_displaysOnLockscreen - In the implementation block
@property (assign) long long unlockActionButtonIndex;                   //@synthesize unlockActionButtonIndex=_unlockActionButtonIndex - In the implementation block
@property (nonatomic,readonly) AMSDialogRequest * request;              //@synthesize request=_request - In the implementation block
-(id)present;
-(AMSDialogRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(CFDictionaryRef)_createNoteDictionaryWithKeys:(ButtonKey*)arg1 buttonActions:(id)arg2 outOptions:(unsigned long long*)arg3 ;
-(BOOL)dismissOnLock;
-(id)_reorderButtonActions;
-(long long)_keyboardTypeFor:(long long)arg1 ;
-(CFUserNotificationRef)_showNotificationFromDictionary:(CFDictionaryRef)arg1 options:(unsigned long long)arg2 ;
-(long long)unlockActionButtonIndex;
-(id)_handleResponseForNote:(CFUserNotificationRef)arg1 buttonActions:(id)arg2 keys:(ButtonKey*)arg3 ;
-(long long)_defaultButtonIndexForActions:(id)arg1 ;
-(BOOL)displaysOnLockscreen;
-(BOOL)dismissOnHomeButton;
-(BOOL)shouldDisplayAsTopMost;
-(BOOL)shouldDismissAfterUnlock;
-(BOOL)shouldPendInSetupIfNotAllowed;
-(void)setDismissOnHomeButton:(BOOL)arg1 ;
-(void)setDismissOnLock:(BOOL)arg1 ;
-(void)setShouldDismissAfterUnlock:(BOOL)arg1 ;
-(void)setShouldDisplayAsTopMost:(BOOL)arg1 ;
-(void)setShouldPendInSetupIfNotAllowed:(BOOL)arg1 ;
-(void)setDisplaysOnLockscreen:(BOOL)arg1 ;
-(void)setUnlockActionButtonIndex:(long long)arg1 ;
-(void)setDefaultButtonIndex:(long long)arg1 ;
-(long long)defaultButtonIndex;
@end
