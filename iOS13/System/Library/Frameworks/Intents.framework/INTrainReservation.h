/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INReservation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSeat, INTrainTrip;

@interface INTrainReservation : INReservation <NSCopying, NSSecureCoding> {

	INSeat* _reservedSeat;
	INTrainTrip* _trainTrip;

}

@property (nonatomic,copy,readonly) INSeat * reservedSeat;                //@synthesize reservedSeat=_reservedSeat - In the implementation block
@property (nonatomic,copy,readonly) INTrainTrip * trainTrip;              //@synthesize trainTrip=_trainTrip - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INSeat *)reservedSeat;
-(INTrainTrip *)trainTrip;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservedSeat:(id)arg7 trainTrip:(id)arg8 ;
@end

