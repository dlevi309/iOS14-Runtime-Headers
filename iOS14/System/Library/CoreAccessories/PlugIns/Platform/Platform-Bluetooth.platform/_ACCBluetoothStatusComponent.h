/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/Platform-Bluetooth.platform/Platform-Bluetooth
*/


#import <Platform-Bluetooth/Platform-Bluetooth-Structs.h>
@class NSString, NSData;

@interface _ACCBluetoothStatusComponent : NSObject {

	BOOL _needToUnplugBTDevice;
	NSString* _accessoryUID;
	NSString* _componentUID;
	NSData* _macAddr;
	NSString* _name;
	BTAccessoryManagerImplRef _btAccessoryManager;
	BTDeviceImplRef _btDevice;

}

@property (nonatomic,readonly) NSString * accessoryUID;                                 //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (nonatomic,readonly) NSString * componentUID;                                 //@synthesize componentUID=_componentUID - In the implementation block
@property (nonatomic,readonly) NSData * macAddr;                                        //@synthesize macAddr=_macAddr - In the implementation block
@property (nonatomic,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BTAccessoryManagerImplRef btAccessoryManager;              //@synthesize btAccessoryManager=_btAccessoryManager - In the implementation block
@property (assign,nonatomic) BTDeviceImplRef btDevice;                                  //@synthesize btDevice=_btDevice - In the implementation block
@property (assign,nonatomic) BOOL needToUnplugBTDevice;                                 //@synthesize needToUnplugBTDevice=_needToUnplugBTDevice - In the implementation block
+(id)createComponentFromDict:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(NSData *)macAddr;
-(NSString *)accessoryUID;
-(id)initWithUID:(id)arg1 macAddr:(id)arg2 name:(id)arg3 forAccessoryUID:(id)arg4 ;
-(NSString *)componentUID;
-(BTAccessoryManagerImplRef)btAccessoryManager;
-(void)setBtAccessoryManager:(BTAccessoryManagerImplRef)arg1 ;
-(BTDeviceImplRef)btDevice;
-(void)setBtDevice:(BTDeviceImplRef)arg1 ;
-(BOOL)needToUnplugBTDevice;
-(void)setNeedToUnplugBTDevice:(BOOL)arg1 ;
@end
