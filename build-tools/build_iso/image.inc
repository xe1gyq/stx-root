# List of CGTS packages to be included/installed in ISO
# If these have dependencies, they will be pulled in automatically
#
acpid
audit
build-info
bash
ceph-manager
cgcs-patch-agent
cgcs-patch-controller
cgts-mtce-compute
cgts-mtce-control
cgts-mtce-storage
computeconfig
computeconfig-standalone
computeconfig-subfunction
compute-huge
dnsmasq
dnsmasq-utils
dpkg
filesystem-scripts
fm-api
gdb
grub2
grub2-efi
grub2-efi-modules
grub2-tools
haproxy
io-monitor
iperf3
isomd5sum
iscsi-initiator-utils
iscsi-initiator-utils-iscsiuio
kmod-drbd
libevent
libtrap-handler
libvirt-docs
libvirt-python
logrotate
lshell
net-snmp-libs
net-snmp-python
net-snmp-utils
nfv
nfv-common
nfv-plugins
nfv-tools
nfv-vim
nfv-client
nova-utils
ntpdate
openldap
openldap-clients
openldap-servers
openssh
openssh-clients
openssh-server
openstack-ras
pam
parted
platform-util
platform-util-noncontroller
python-cephclient
python-keyring
qemu-kvm-tools-ev
rsync
sm-client
sm-tools
snmp-ext
storageconfig
sysinv
sysinv-agent
tsconfig
tboot
rabbitmq-server
cgts-client
python-django-horizon
libvirt
libvirt-client
libvirt-daemon
libvirt-daemon-config-network
libvirt-daemon-config-nwfilter
libvirt-daemon-driver-lxc
libvirt-daemon-driver-network
libvirt-daemon-driver-nodedev
libvirt-daemon-driver-nwfilter
libvirt-daemon-driver-qemu
libvirt-daemon-driver-secret
libvirt-daemon-driver-storage
nova-api-proxy
configutilities
controllerconfig
fm-common
fm-mgr
logmgmt
cgts-mtce-common
cgts-mtce-common-pmon
cgts-mtce-common-rmon
cgts-mtce-common-hostw
cgts-mtce-common-hwmon
cgts-mtce-common-guestAgent
cgts-mtce-common-guestServer
cgcs-patch
patch-alarm
# patch-boot-args is not ported to centos yet
wrs-ssl
tss2
tpm2-tools
tpm2-openssl-engine
libtpms
swtpm
swtpm-tools
swtpm-cuse
monitor-tools
python2-aodhclient
openstack-aodh-api
openstack-aodh-evaluator
openstack-aodh-expirer
openstack-aodh-listener
openstack-aodh-notifier
python-ceilometer
#openstack-ceilometer-alarm provided in openstack-aodh-compat package
openstack-aodh-compat
openstack-ceilometer-api
openstack-ceilometer-collector
openstack-ceilometer-common
openstack-ceilometer-ipmi
openstack-ceilometer-notification
openstack-ceilometer-polling
openstack-cinder
openstack-glance
openstack-heat-api
openstack-heat-api-cfn
openstack-heat-api-cloudwatch
openstack-heat-common
openstack-heat-engine
openstack-ironic-api
openstack-ironic-common
openstack-ironic-conductor
python2-ironicclient
# doc generation turned off in Mitaka by default
#python-django-horizon-doc
openstack-keystone
openstack-murano-api
openstack-murano-cf-api
openstack-murano-common
openstack-murano-doc
openstack-murano-engine
openstack-murano-ui
openstack-murano-ui-doc
python2-muranoclient
python-muranoclient-doc
openstack-magnum-api
openstack-magnum-common
openstack-magnum-conductor
openstack-magnum-doc
openstack-magnum-ui
python2-magnumclient
python-magnum
python-magnumclient-doc
python-magnumclient-tests
python-magnum-tests
openstack-neutron
openstack-neutron-common
openstack-neutron-sriov-nic-agent
openstack-neutron-ml2
openstack-neutron-openvswitch
python-neutron
openstack-nova-api
openstack-nova-cells
openstack-nova-cert
openstack-nova-common
openstack-nova-compute
openstack-nova-conductor
openstack-nova-console
openstack-nova-network
openstack-nova-novncproxy
# openstack-nova-objectstore removed in Mitaka
#openstack-nova-objectstore
openstack-nova-scheduler
openstack-nova-serialproxy
openstack-nova-spicehtml5proxy
openstack-nova-placement-api
python-nova
python2-novaclient
python2-openstackclient
python2-oslo-log
python2-django-openstack-auth
python2-six
#base-files is not yet ported to CENTOS
cgcs-users
namespace-utils
nss-pam-ldapd
# thin-provisioning-tools is not yet ported to CENTOS
# cluster-resource-agents is not yet ported to CENTOS
dhcp
nfs-utils
initscripts
# note -- the "systemd" package provides udev
systemd
# udev-extraconf  is not yet ported to CENTOS
# cdrkit is only available as a src.rpm
python-d2to1
# eucatools  is not yet ported to CENTOS
facter
hiera
# libaugesas-ruby is not yet ported to CENTOS
nfscheck
python2-pecan
# pseudo not available
# ps-byte-compile is not yet ported to CENTOS
python
python-configobj
python-pep8
# python-pyflakes is not yet ported to CENTOS
python2-rsa
# python-xmlrpclib is not yet ported to CENTOS
ruby-shadow
swig
syslinux
iotop
iptables
iptables-services
iptables-utils
ldapscripts
lighttpd
lighttpd-fastcgi
lighttpd-mod_geoip
lighttpd-mod_mysql_vhost
novnc
ntp
ntp-perl
procps-ng
python-daemon
python2-gunicorn
python-pyudev
python-smartpm
# shadow is not yet ported to CENTOS
shadow-utils
syslog-ng
syslog-ng-libdbi
drbd
drbd-bash-completion
# drbd-debuginfo
drbd-heartbeat
# drbd-kernel-debuginfo
drbd-pacemaker
drbd-udev
drbd-utils
# drbd-tools is not yet ported to CENTOS
# nfv-docs  should not be included
# nfv-tests should not be included
curl
lvm2
# tgt is ported, but not yet added here
sm
sm-common
sm-common-libs
sm-db
sm-api
sm-eru
time
puppet
puppet-manifests
openstack-dashboard
# openstack-dashboard-theme TODO: fix build-iso
dhclient
postgresql
postgresql-server
postgresql-contrib
python-psycopg2
setup
targetcli
sudo
pxe-network-installer
strace
resource-agents
lldpd
wget
bind-utils
selinux-policy
pm-utils
centos-release
tcpdump
config-gate
config-gate-compute
sysstat
smartmontools
collector
io-scheduler
fm-doc
vm-topology
python2-wsme
ceph
ceph-common
ceph-fuse
ceph-radosgw
libcephfs1
python-ceph-compat
python-cephfs
socat
irqbalance
kmod-e1000e
kmod-i40e
kmod-ixgbe
kmod-ixgbevf
kmod-tpm
kmod-integrity
vim-enhanced
wrs-heat-templates
# heat-contrib-nova-flavor is now included with openstack-heat
tis-extensions
tis-extensions-controller
qat17
mlx4-config
host-guest-comm
guest-scale-helper
python-networking-odl
qemu-kvm-ev
qemu-img-ev
# for realtime kernel
kernel-rt
kernel-rt-kvm
kmod-e1000e-rt
kmod-i40e-rt
kmod-ixgbe-rt
kmod-tpm-rt
kmod-integrity-rt
rtctl
rt-setup
qat17-rt
kernel-rt-tools
# For low-latency compute
kmod-drbd-rt
snmp-audittrail
OVMF
# neutron bgp
python2-networking-bgpvpn
python-networking-bgpvpn-dashboard
python-networking-bgpvpn-heat
python2-neutron-dynamic-routing
python2-ryu
python-ryu-common
openvswitch
python2-networking-sfc
openstack-panko-api
openstack-panko-common
python-panko
python2-pankoclient
# distributed cloud
distributedcloud-dcmanager
distributedcloud-client-dcmanagerclient
distributedcloud-dcorch
# ima plugin for RPM
rpm-plugin-systemd-inhibit
platform-kickstarts
python-lefthandclient
python-3parclient

# Add debugging tools
perf
zip
unzip
traceroute
