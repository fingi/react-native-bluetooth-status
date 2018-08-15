//
//  RNBluetoothManager.h

#ifndef RNBluetoothManager_h
#define RNBluetoothManager_h

#import "RCTBridgeModule.h"
#import "RCTEventEmitter.h"

@interface RNBluetoothManager : RCTEventEmitter <RCTBridgeModule, CBCentralManagerDelegate>

@property(strong, nonatomic) CBCentralManager *centralManager;

@end

#endif /* RNBluetoothManager_h */
