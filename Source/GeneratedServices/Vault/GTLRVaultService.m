// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Vault API (vault/v1)
// Documentation:
//   https://apps.google.com/products/vault/

#import "GTLRVault.h"

@implementation GTLRVaultService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://vault.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint", @"pp" ];
  }
  return self;
}

@end
