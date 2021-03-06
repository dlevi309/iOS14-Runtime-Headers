/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
*/

#import <ButtonResolver/ButtonResolver-Structs.h>
#import <ButtonResolver/BRInterface.h>

@class NSMutableDictionary, NSMutableSet;

@interface BRInterfaceKeyboard : BRInterface {

	IOHIDEventSystemClientRef _client;
	NSMutableDictionary* _propertyCache;
	unsigned long long _doublePressTimeoutUs;
	unsigned long long _triplePressTimeoutUs;
	unsigned long long _longPressTimeoutUs;
	BOOL _isReady;
	unsigned long long _maxAssetSlots;
	unsigned long long _unusedAssetSlots;
	NSMutableSet* _services;

}

@property (nonatomic,readonly) NSMutableSet * services;              //@synthesize services=_services - In the implementation block
+(id)interface;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)propertyList;
-(BOOL)isReady;
-(NSMutableSet *)services;
-(unsigned long long)maxAssetSlots;
-(unsigned long long)unusedAssetSlots;
-(BOOL)setGlobalConfigs:(id)arg1 error:(id*)arg2 ;
-(BOOL)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4 ;
-(BOOL)enableStates:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableStates:(id)arg1 clearAsset:(BOOL)arg2 error:(id*)arg3 ;
-(void)scheduleReadyNotificationWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_setConfig:(id)arg1 forState:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_enableState:(unsigned long long)arg1 ;
-(BOOL)_disableState:(unsigned long long)arg1 ;
-(void)_findServices;
-(BOOL)_servicesSetProperty:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(BOOL)_setCachedPropertiesOnService:(IOHIDServiceClientRef)arg1 ;
@end

