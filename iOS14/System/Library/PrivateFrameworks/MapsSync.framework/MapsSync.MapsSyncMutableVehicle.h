/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncMutableBaseItem.h>

@class NSString, NSData, NSDate, NSNumber;

@interface MapsSync.MapsSyncMutableVehicle : MapsSync.MapsSyncMutableBaseItem {

	 _proxy;

}

@property (copy,nonatomic) NSString * colorHex; 
@property (copy,nonatomic) NSData * currentVehicleState; 
@property (copy,nonatomic) NSDate * dateOfVehicleIngestion; 
@property (copy,nonatomic) NSString * displayName; 
@property (copy,nonatomic) NSString * headUnitBluetoothIdentifier; 
@property (copy,nonatomic) NSString * headUnitMacAddress; 
@property (copy,nonatomic) NSString * iapIdentifier; 
@property (copy,nonatomic) NSDate * lastStateUpdateDate; 
@property (copy,nonatomic) NSString * licensePlate; 
@property (copy,nonatomic) NSString * lprPowerType; 
@property (copy,nonatomic) NSString * lprVehicleType; 
@property (copy,nonatomic) NSString * manufacturer; 
@property (copy,nonatomic) NSString * model; 
@property (copy,nonatomic) NSString * pairedAppIdentifier; 
@property (copy,nonatomic) NSData * powerByConnector; 
@property (copy,nonatomic) NSString * siriIntentsIdentifier; 
@property (retain,nonatomic) NSNumber * supportedConnectors; 
@property (copy,nonatomic) NSString * vehicleIdentifier; 
@property (retain,nonatomic) NSNumber * vehicleType; 
@property (retain,nonatomic) NSNumber * year; 
-(void)setYear:(NSNumber *)arg1 ;
-(NSNumber *)year;
-(NSString *)model;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(NSString *)vehicleIdentifier;
-(void)setVehicleIdentifier:(NSString *)arg1 ;
-(NSString *)licensePlate;
-(void)setLicensePlate:(NSString *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithProxyObject:(id)arg1 ;
-(NSString *)colorHex;
-(void)setColorHex:(NSString *)arg1 ;
-(NSData *)currentVehicleState;
-(void)setCurrentVehicleState:(NSData *)arg1 ;
-(NSDate *)dateOfVehicleIngestion;
-(void)setDateOfVehicleIngestion:(NSDate *)arg1 ;
-(NSString *)headUnitBluetoothIdentifier;
-(void)setHeadUnitBluetoothIdentifier:(NSString *)arg1 ;
-(NSString *)headUnitMacAddress;
-(void)setHeadUnitMacAddress:(NSString *)arg1 ;
-(NSString *)iapIdentifier;
-(void)setIapIdentifier:(NSString *)arg1 ;
-(NSDate *)lastStateUpdateDate;
-(void)setLastStateUpdateDate:(NSDate *)arg1 ;
-(NSString *)lprPowerType;
-(void)setLprPowerType:(NSString *)arg1 ;
-(NSString *)lprVehicleType;
-(void)setLprVehicleType:(NSString *)arg1 ;
-(NSString *)pairedAppIdentifier;
-(void)setPairedAppIdentifier:(NSString *)arg1 ;
-(NSData *)powerByConnector;
-(void)setPowerByConnector:(NSData *)arg1 ;
-(NSString *)siriIntentsIdentifier;
-(void)setSiriIntentsIdentifier:(NSString *)arg1 ;
-(NSNumber *)supportedConnectors;
-(void)setSupportedConnectors:(NSNumber *)arg1 ;
-(void)setVehicleType:(NSNumber *)arg1 ;
-(NSNumber *)vehicleType;
-(NSString *)displayName;
@end

